//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIImageView;

@interface _TBCBlurImageItemInfo : NSObject
{
    _Bool _animated;
    _Bool _shouldCache;
    NSString *_urlString;
    UIImageView *_imageView;
    UIColor *_filterColor;
}

@property(retain, nonatomic) UIColor *filterColor; // @synthesize filterColor=_filterColor;
@property(nonatomic) _Bool shouldCache; // @synthesize shouldCache=_shouldCache;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void)dealloc;

@end

