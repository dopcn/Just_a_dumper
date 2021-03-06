//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CustomThemeItem : NSObject
{
    double _alphaValue;
    double _blurValue;
    struct SColorStyle _preColorStyle;
    struct SColorStyle _customColorStyle;
    struct SColorStyle _imgForColorStyle;
    struct SColorStyle _imgBackColorStyle;
}

@property(nonatomic) double blurValue; // @synthesize blurValue=_blurValue;
@property(nonatomic) double alphaValue; // @synthesize alphaValue=_alphaValue;
@property(nonatomic) struct SColorStyle imgBackColorStyle; // @synthesize imgBackColorStyle=_imgBackColorStyle;
@property(nonatomic) struct SColorStyle imgForColorStyle; // @synthesize imgForColorStyle=_imgForColorStyle;
@property(nonatomic) struct SColorStyle customColorStyle; // @synthesize customColorStyle=_customColorStyle;
@property(nonatomic) struct SColorStyle preColorStyle; // @synthesize preColorStyle=_preColorStyle;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

