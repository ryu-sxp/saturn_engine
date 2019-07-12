module Saten

=begin
  def Saten.printg(str)
    raw = false
    str = str.to_s
    str.each_char do |c|
      puts c
    end
  end
=end

  class Text
    def Text.set(id, str, x, y)
      # creates glyph array representation of str
      # id is glyph array to set, nil to create new array
      # x, y top left position of glyph 0 on screen
      check = 0
      if id.nil?
        check = Text.create()
        if check == 1
          # failed to allocate memory for new text object
        end
      else
        # no use for now. might consider later if there are no better options to
        # display numerical variables
        # the idea is to change an existing text object to a new set of glyphs
        Text.free()
      end
      # don't append glyphs to nonexistant text...
      if check == 0
        str = str.to_s
        str.each_char do |c|
          puts c
        end
      end
    end
  end

end
