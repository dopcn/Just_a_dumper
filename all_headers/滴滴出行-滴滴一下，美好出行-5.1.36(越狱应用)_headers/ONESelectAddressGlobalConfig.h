//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DMCityListModel, NSString;

@interface ONESelectAddressGlobalConfig : NSObject
{
    CDUnknownBlockType _allCityListBlock;
    CDUnknownBlockType _currentProductIdBlock;
    CDUnknownBlockType _currentAcckeyBlock;
    CDUnknownBlockType _forceLoginBlock;
    CDUnknownBlockType _ONESelectAddresslogBlock;
    CDUnknownBlockType _ONESelectAddressOMGBlock;
    CDUnknownBlockType _getVCParamsBlock;
}

@property(copy, nonatomic) CDUnknownBlockType getVCParamsBlock; // @synthesize getVCParamsBlock=_getVCParamsBlock;
@property(copy, nonatomic) CDUnknownBlockType ONESelectAddressOMGBlock; // @synthesize ONESelectAddressOMGBlock=_ONESelectAddressOMGBlock;
@property(copy, nonatomic) CDUnknownBlockType ONESelectAddresslogBlock; // @synthesize ONESelectAddresslogBlock=_ONESelectAddresslogBlock;
@property(copy, nonatomic) CDUnknownBlockType forceLoginBlock; // @synthesize forceLoginBlock=_forceLoginBlock;
@property(copy, nonatomic) CDUnknownBlockType currentAcckeyBlock; // @synthesize currentAcckeyBlock=_currentAcckeyBlock;
@property(copy, nonatomic) CDUnknownBlockType currentProductIdBlock; // @synthesize currentProductIdBlock=_currentProductIdBlock;
@property(copy, nonatomic) CDUnknownBlockType allCityListBlock; // @synthesize allCityListBlock=_allCityListBlock;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *currentAcckey;
@property(readonly, copy, nonatomic) NSString *currentProductId;
@property(readonly, nonatomic) DMCityListModel *allCityListModel;

@end

