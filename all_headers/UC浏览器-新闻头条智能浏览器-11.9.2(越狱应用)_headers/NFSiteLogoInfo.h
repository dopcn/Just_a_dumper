//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NFPictureInfo, NSString;

@interface NFSiteLogoInfo : NSObject <NSCoding>
{
    long long _siteLogoID;
    NFPictureInfo *_siteLogoImg;
    long long _siteLogoStyle;
    NSString *_siteLogoDesc;
    NSString *_siteLogoLink;
}

@property(retain, nonatomic) NSString *siteLogoLink; // @synthesize siteLogoLink=_siteLogoLink;
@property(retain, nonatomic) NSString *siteLogoDesc; // @synthesize siteLogoDesc=_siteLogoDesc;
@property(nonatomic) long long siteLogoStyle; // @synthesize siteLogoStyle=_siteLogoStyle;
@property(retain, nonatomic) NFPictureInfo *siteLogoImg; // @synthesize siteLogoImg=_siteLogoImg;
@property(nonatomic) long long siteLogoID; // @synthesize siteLogoID=_siteLogoID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end

