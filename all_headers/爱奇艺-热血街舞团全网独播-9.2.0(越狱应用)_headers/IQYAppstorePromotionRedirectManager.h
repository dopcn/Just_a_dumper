//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DataLoadManager.h"

@class NSString;

@interface IQYAppstorePromotionRedirectManager : DataLoadManager
{
    NSString *_appId;
    NSString *_deviceId;
}

@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (_Bool)parse:(id)arg1;
- (id)bodyDataForPost;
- (id)urlStl;
- (id)init;

@end

