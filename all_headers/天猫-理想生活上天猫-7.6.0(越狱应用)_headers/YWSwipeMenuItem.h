//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface YWSwipeMenuItem : NSObject
{
    long long _tag;
    double _width;
    NSString *_title;
    UIColor *_titleColor;
    UIColor *_backgroundColor;
    CDUnknownBlockType _didClickBlock;
}

+ (id)menuItemWithTitle:(id)arg1 titleColor:(id)arg2 backgroundColor:(id)arg3;
@property(copy, nonatomic) CDUnknownBlockType didClickBlock; // @synthesize didClickBlock=_didClickBlock;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;

@end

