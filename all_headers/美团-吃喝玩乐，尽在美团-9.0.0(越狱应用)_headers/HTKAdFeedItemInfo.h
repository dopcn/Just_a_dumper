//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSString;

@interface HTKAdFeedItemInfo : SAKDomainObject
{
    NSString *_title;
    NSString *_frontImg;
    NSString *_imgTopTag;
    NSString *_imgBottomTag;
    NSString *_redirectUrl;
}

@property(retain, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(retain, nonatomic) NSString *imgBottomTag; // @synthesize imgBottomTag=_imgBottomTag;
@property(retain, nonatomic) NSString *imgTopTag; // @synthesize imgTopTag=_imgTopTag;
@property(retain, nonatomic) NSString *frontImg; // @synthesize frontImg=_frontImg;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

