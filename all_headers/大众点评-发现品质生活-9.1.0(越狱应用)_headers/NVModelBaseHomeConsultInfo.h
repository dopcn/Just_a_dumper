//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString;

@interface NVModelBaseHomeConsultInfo : NVBaseModel
{
    _Bool _consultUnread;
    _Bool _consultant;
    NSString *_consultTitle;
    NSString *_consultUrl;
}

+ (id)metaInfo;
@property(nonatomic) _Bool consultant; // @synthesize consultant=_consultant;
@property(copy, nonatomic) NSString *consultUrl; // @synthesize consultUrl=_consultUrl;
@property(nonatomic) _Bool consultUnread; // @synthesize consultUnread=_consultUnread;
@property(copy, nonatomic) NSString *consultTitle; // @synthesize consultTitle=_consultTitle;
- (void).cxx_destruct;

@end

