//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface LFTINHomeModel : NSObject
{
    long long _couponCodeNum;
    NSArray *_homeProductList;
}

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSArray *homeProductList; // @synthesize homeProductList=_homeProductList;
@property(nonatomic) long long couponCodeNum; // @synthesize couponCodeNum=_couponCodeNum;
- (void).cxx_destruct;

@end

