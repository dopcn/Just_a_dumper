//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OTSCore/OTSValueObject.h>

@class NSString;

@interface DownloadVO : OTSValueObject
{
    NSString *_canUpdate;
    NSString *_downloadUrl;
    NSString *_forceUpdate;
    NSString *_remark;
    NSString *_descUrl;
    NSString *_forceDown;
}

@property(copy, nonatomic) NSString *forceDown; // @synthesize forceDown=_forceDown;
@property(copy, nonatomic) NSString *descUrl; // @synthesize descUrl=_descUrl;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *forceUpdate; // @synthesize forceUpdate=_forceUpdate;
@property(copy, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(copy, nonatomic) NSString *canUpdate; // @synthesize canUpdate=_canUpdate;
- (void).cxx_destruct;
- (_Bool)isForceUpdate;
- (_Bool)isCanUpdate;

@end

