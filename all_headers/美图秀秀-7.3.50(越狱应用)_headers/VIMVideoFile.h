//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VIMModelObject.h"

@class NSDate, NSNumber, NSString, VIMVideoLog;

@interface VIMVideoFile : VIMModelObject
{
    NSDate *_expirationDate;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_size;
    NSString *_link;
    NSString *_quality;
    NSString *_type;
    VIMVideoLog *_log;
    NSString *_expires;
}

@property(copy, nonatomic) NSString *expires; // @synthesize expires=_expires;
@property(retain, nonatomic) VIMVideoLog *log; // @synthesize log=_log;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *quality; // @synthesize quality=_quality;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (void).cxx_destruct;
- (_Bool)isExpired;
- (_Bool)isStreamable;
- (_Bool)isDownloadable;
- (_Bool)isSupportedMimeType;
- (void)didFinishMapping;
- (Class)getClassForObjectKey:(id)arg1;

@end

