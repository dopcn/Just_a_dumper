//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;
@protocol Ignore;

@interface VSMultiBrandCouponStateModel : JSONModel
{
    NSString<Ignore> *_brandID;
    long long _num;
    long long _total;
    long long _status;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(nonatomic) long long num; // @synthesize num=_num;
@property(copy, nonatomic) NSString<Ignore> *brandID; // @synthesize brandID=_brandID;
- (void).cxx_destruct;

@end

