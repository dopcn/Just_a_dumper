//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImageView;

@interface SLImageSet : NSObject
{
    _Bool _isSelectedImageView;
    UIImageView *_imageView;
    NSString *_urlStr;
    struct CGRect _oldRect;
}

@property(nonatomic) _Bool isSelectedImageView; // @synthesize isSelectedImageView=_isSelectedImageView;
@property(nonatomic) struct CGRect oldRect; // @synthesize oldRect=_oldRect;
@property(copy, nonatomic) NSString *urlStr; // @synthesize urlStr=_urlStr;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;

@end

