//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDApi.h"

@class NSString;
@protocol Optional;

@interface ZDCourseCourseCourseindexv4BannerblockItem : ZDApi
{
    NSString<Optional> *_http_method;
    id <Optional> _extension;
    long long _width;
    NSString *_bannerImg;
    long long _height;
}

@property(nonatomic) long long height; // @synthesize height=_height;
@property(copy, nonatomic) NSString *bannerImg; // @synthesize bannerImg=_bannerImg;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(retain, nonatomic) id <Optional> extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString<Optional> *http_method; // @synthesize http_method=_http_method;
- (void).cxx_destruct;

@end

