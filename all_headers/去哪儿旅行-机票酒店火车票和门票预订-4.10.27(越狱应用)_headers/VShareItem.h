//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface VShareItem : NSObject
{
    NSString *_shareType;
    NSString *_shareTitle;
    NSString *_shareDescription;
    NSString *_shareImageURL;
    NSString *_shareImageBase64Data;
    NSString *_shareURL;
}

@property(copy, nonatomic) NSString *shareURL; // @synthesize shareURL=_shareURL;
@property(copy, nonatomic) NSString *shareImageBase64Data; // @synthesize shareImageBase64Data=_shareImageBase64Data;
@property(copy, nonatomic) NSString *shareImageURL; // @synthesize shareImageURL=_shareImageURL;
@property(copy, nonatomic) NSString *shareDescription; // @synthesize shareDescription=_shareDescription;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(copy, nonatomic) NSString *shareType; // @synthesize shareType=_shareType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

