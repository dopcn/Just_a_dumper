//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIColor, UIFont;

@interface TipsTextConfigureModel : NSObject
{
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_backgroundColor;
    UIColor *_boaderColor;
    double _boaderWidth;
    struct CGSize _buttonSize;
}

@property(nonatomic) struct CGSize buttonSize; // @synthesize buttonSize=_buttonSize;
@property(nonatomic) double boaderWidth; // @synthesize boaderWidth=_boaderWidth;
@property(retain, nonatomic) UIColor *boaderColor; // @synthesize boaderColor=_boaderColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;

@end

