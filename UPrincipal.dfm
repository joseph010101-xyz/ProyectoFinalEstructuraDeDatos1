object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 415
  ClientWidth = 795
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object GroupBox1: TGroupBox
    Left = 408
    Top = 80
    Width = 305
    Height = 193
    Caption = 'GroupBox1'
    TabOrder = 0
    object Button1: TButton
      Left = 80
      Top = 72
      Width = 121
      Height = 49
      Caption = 'Ticket'
      Font.Charset = GB2312_CHARSET
      Font.Color = clLime
      Font.Height = -33
      Font.Name = 'STCaiyun'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
      OnClick = Button1Click
    end
  end
  object GroupBox2: TGroupBox
    Left = 48
    Top = 72
    Width = 281
    Height = 201
    Caption = 'GroupBox2'
    TabOrder = 1
  end
  object Memo1: TMemo
    Left = 208
    Top = 312
    Width = 185
    Height = 89
    Lines.Strings = (
      'Memo1')
    TabOrder = 2
  end
end
