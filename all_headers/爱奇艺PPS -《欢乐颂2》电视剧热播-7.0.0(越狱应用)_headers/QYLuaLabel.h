//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYBaseLuaControl.h"

@class NSString, UIColor, UIFont, UILabel;

@interface QYLuaLabel : QYBaseLuaControl
{
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    long long _numberOfLines;
    long long _textAlignment;
    UILabel *_label;
}

+ (long long)registerClassInLua:(struct lua_State *)arg1 className:(id)arg2;
+ (int)mapFunctionListLength;
+ (const struct luaL_Reg *)mapFunctions;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (id)init:(struct lua_State *)arg1;
- (id)qylua_nativeObject;

@end

