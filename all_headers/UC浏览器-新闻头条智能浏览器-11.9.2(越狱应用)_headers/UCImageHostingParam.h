//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface UCImageHostingParam : NSObject
{
    NSString *_originalURL;
    NSString *_finalURL;
    unsigned long long _quality;
    unsigned long long _format;
    double _scale;
    NSString *_cut_face;
    NSString *_gif_frame;
    NSString *_from;
    struct CGSize _size;
    struct CGPoint _cutFrom;
}

+ (id)paramWithURL:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3;
+ (id)paramWithURL:(id)arg1 size:(struct CGSize)arg2;
+ (id)paramWithURL:(id)arg1 width:(double)arg2;
+ (id)paramWithURL:(id)arg1;
+ (id)wifiParam;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(copy, nonatomic) NSString *gif_frame; // @synthesize gif_frame=_gif_frame;
@property(nonatomic) struct CGPoint cutFrom; // @synthesize cutFrom=_cutFrom;
@property(copy, nonatomic) NSString *cut_face; // @synthesize cut_face=_cut_face;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) unsigned long long format; // @synthesize format=_format;
@property(nonatomic) unsigned long long quality; // @synthesize quality=_quality;
@property(copy, nonatomic) NSString *finalURL; // @synthesize finalURL=_finalURL;
@property(copy, nonatomic) NSString *originalURL; // @synthesize originalURL=_originalURL;
- (void).cxx_destruct;
- (void)setupParam:(_Bool)arg1;
- (id)init;
- (id)initWithWifiFlag:(_Bool)arg1;
- (unsigned long long)ali_oss_format;
- (int)ali_oss_quality;
- (id)toAliOSSRequestParam;
- (id)PecoImageFormat;
- (unsigned long long)PecoImageQuality;
- (id)toPecoImageRequestParam;
- (id)UAEImageFormat;
- (unsigned long long)UAEImageQuality;
- (id)toUAEImageRequestParam;
- (unsigned long long)ZZDImageType;
- (unsigned long long)ZZDImageMode;
- (id)toZZDImageRequestParam;

@end

