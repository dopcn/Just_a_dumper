//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString;

@interface NVModelBaseOSPushMsgBeanDo : NVBaseModel
{
    NSString *_title;
    NSString *_context;
    NSString *_url;
    NSString *_pushId;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *pushId; // @synthesize pushId=_pushId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

