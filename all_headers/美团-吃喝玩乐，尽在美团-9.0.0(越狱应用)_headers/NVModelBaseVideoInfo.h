//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString;

@interface NVModelBaseVideoInfo : NVBaseModel
{
    NSString *_format;
    long long _height;
    long long _width;
    long long _bitRate;
    long long _duration;
    long long _storageSize;
    long long _videoId;
    long long _picId;
    NSString *_keyUrl;
    NSString *_fileId;
    NSString *_coverUrl;
    NSString *_fileHash;
    NSString *_stickerText;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *stickerText; // @synthesize stickerText=_stickerText;
@property(copy, nonatomic) NSString *fileHash; // @synthesize fileHash=_fileHash;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(copy, nonatomic) NSString *keyUrl; // @synthesize keyUrl=_keyUrl;
@property(nonatomic) long long picId; // @synthesize picId=_picId;
@property(nonatomic) long long videoId; // @synthesize videoId=_videoId;
@property(nonatomic) long long storageSize; // @synthesize storageSize=_storageSize;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long bitRate; // @synthesize bitRate=_bitRate;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(copy, nonatomic) NSString *format; // @synthesize format=_format;
- (void).cxx_destruct;

@end

