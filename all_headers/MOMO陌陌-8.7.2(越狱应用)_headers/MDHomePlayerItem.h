//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL, UIImage;

@interface MDHomePlayerItem : NSObject
{
    NSURL *_url;
    UIImage *_firstFrame;
}

+ (id)itemWithURL:(id)arg1 firstFrame:(id)arg2;
+ (id)itemWithURLString:(id)arg1 firstFrame:(id)arg2;
@property(retain, nonatomic) UIImage *firstFrame; // @synthesize firstFrame=_firstFrame;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

