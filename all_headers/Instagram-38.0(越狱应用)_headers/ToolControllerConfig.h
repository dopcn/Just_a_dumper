//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface ToolControllerConfig : NSObject
{
    double _sectionInsetNonScrolling;
    double _sectionInsetScrolling;
    double _itemWidthNonScrolling;
    double _itemWidthScrolling;
    double _itemHeight;
    double _thumbnailSize;
    UIColor *_titleLabelColor;
    double _titleLabelFontSize;
    double _titleOffsetY;
}

+ (id)boomerangConfig;
+ (id)layoutConfig;
@property(nonatomic) double titleOffsetY; // @synthesize titleOffsetY=_titleOffsetY;
@property(nonatomic) double titleLabelFontSize; // @synthesize titleLabelFontSize=_titleLabelFontSize;
@property(retain, nonatomic) UIColor *titleLabelColor; // @synthesize titleLabelColor=_titleLabelColor;
@property(nonatomic) double thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) double itemWidthScrolling; // @synthesize itemWidthScrolling=_itemWidthScrolling;
@property(nonatomic) double itemWidthNonScrolling; // @synthesize itemWidthNonScrolling=_itemWidthNonScrolling;
@property(nonatomic) double sectionInsetScrolling; // @synthesize sectionInsetScrolling=_sectionInsetScrolling;
@property(nonatomic) double sectionInsetNonScrolling; // @synthesize sectionInsetNonScrolling=_sectionInsetNonScrolling;
- (void).cxx_destruct;

@end

