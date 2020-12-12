object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1057#1077#1084#1100#1103
  ClientHeight = 503
  ClientWidth = 1027
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object StringGrid1: TStringGrid
    Left = 0
    Top = 31
    Width = 1027
    Height = 441
    Align = alClient
    FixedCols = 0
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goRowSizing, goColSizing, goRowMoving, goColMoving, goTabs, goRowSelect]
    ParentFont = False
    TabOrder = 0
    ColWidths = (
      64
      64
      64
      64
      64)
    RowHeights = (
      24
      24
      24
      24
      24)
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 1027
    Height = 31
    Align = alTop
    TabOrder = 1
    ExplicitTop = -6
    object Label1: TLabel
      Left = 1
      Top = 1
      Width = 107
      Height = 29
      Align = alLeft
      Alignment = taCenter
      Caption = '  '#1055#1088#1086#1076#1091#1082#1090'  '
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      ExplicitHeight = 23
    end
    object Label2: TLabel
      Left = 228
      Top = 1
      Width = 126
      Height = 29
      Align = alLeft
      Alignment = taCenter
      Caption = '  '#1050#1072#1090#1077#1075#1086#1088#1080#1103'  '
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      ExplicitHeight = 23
    end
    object Label3: TLabel
      Left = 474
      Top = 1
      Width = 71
      Height = 29
      Align = alLeft
      Alignment = taCenter
      Caption = '  '#1044#1072#1090#1072'  '
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      ExplicitHeight = 23
    end
    object Edit1: TEdit
      Left = 108
      Top = 1
      Width = 120
      Height = 29
      Align = alLeft
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      OnChange = Edit1Change
    end
    object Edit2: TEdit
      Left = 354
      Top = 1
      Width = 120
      Height = 29
      Align = alLeft
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      OnChange = Edit1Change
      ExplicitLeft = 444
      ExplicitTop = -2
    end
    object Edit3: TEdit
      Left = 545
      Top = 1
      Width = 120
      Height = 29
      Align = alLeft
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      OnChange = Edit1Change
      ExplicitLeft = 690
      ExplicitTop = -4
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 472
    Width = 1027
    Height = 31
    Align = alBottom
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    object Button1: TButton
      Left = 1
      Top = 1
      Width = 152
      Height = 29
      Align = alLeft
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -24
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 874
      Top = 1
      Width = 152
      Height = 29
      Align = alRight
      Caption = #1059#1076#1072#1083#1080#1090#1100
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -24
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      OnClick = Button2Click
      ExplicitLeft = 875
      ExplicitTop = 6
    end
  end
end
