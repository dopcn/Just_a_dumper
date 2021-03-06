//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BWA_CommonWebViewTextInputStyle : NSObject
{
    NSString *_color;
    NSString *_backgroundColor;
    double _fontSize;
    double _top;
    double _left;
    double _width;
    double _height;
    double _paddingTop;
    double _paddingLeft;
    double _paddingBottom;
    double _paddingRight;
}

@property(nonatomic) double paddingRight; // @synthesize paddingRight=_paddingRight;
@property(nonatomic) double paddingBottom; // @synthesize paddingBottom=_paddingBottom;
@property(nonatomic) double paddingLeft; // @synthesize paddingLeft=_paddingLeft;
@property(nonatomic) double paddingTop; // @synthesize paddingTop=_paddingTop;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double left; // @synthesize left=_left;
@property(nonatomic) double top; // @synthesize top=_top;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)setupInputStyleWithDic:(id)arg1;
- (void)resetDefaultData;

@end

