//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FSComponentModel.h"

@class FSSPNearStoresComponentActionModel, NSString;

@interface FSSPNearStoresComponentModel : FSComponentModel
{
    FSSPNearStoresComponentActionModel *_action;
    NSString *_distance;
    NSString *_storeName;
    NSString *_url;
}

+ (id)jsonToModelKeyMapDictionary;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(copy, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(copy, nonatomic) FSSPNearStoresComponentActionModel *action; // @synthesize action=_action;
- (void).cxx_destruct;

@end

