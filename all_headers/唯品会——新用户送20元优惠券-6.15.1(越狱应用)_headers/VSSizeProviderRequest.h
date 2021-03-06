//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VSEasyAPIRequestParameter.h"

@class NSString;
@protocol Optional;

@interface VSSizeProviderRequest : VSEasyAPIRequestParameter
{
    NSString<Optional> *_sizeTableId;
    NSString<Optional> *_productId;
    NSString<Optional> *_brandId;
    NSString<Optional> *_spuId;
    NSString<Optional> *_functions;
    long long _sizeMeasurePicture;
    NSString<Optional> *_roleId;
    NSString *_fields;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString *fields; // @synthesize fields=_fields;
@property(copy, nonatomic) NSString<Optional> *roleId; // @synthesize roleId=_roleId;
@property(nonatomic) long long sizeMeasurePicture; // @synthesize sizeMeasurePicture=_sizeMeasurePicture;
@property(copy, nonatomic) NSString<Optional> *functions; // @synthesize functions=_functions;
@property(copy, nonatomic) NSString<Optional> *spuId; // @synthesize spuId=_spuId;
@property(copy, nonatomic) NSString<Optional> *brandId; // @synthesize brandId=_brandId;
@property(copy, nonatomic) NSString<Optional> *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString<Optional> *sizeTableId; // @synthesize sizeTableId=_sizeTableId;
- (void).cxx_destruct;

@end

