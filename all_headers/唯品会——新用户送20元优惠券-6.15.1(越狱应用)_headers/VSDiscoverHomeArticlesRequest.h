//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VSEasyAPIRequestParameter.h"

@class NSNumber, NSString;

@interface VSDiscoverHomeArticlesRequest : VSEasyAPIRequestParameter
{
    NSString *_type;
    NSString *_data;
    NSNumber *_similarProductStatus;
}

@property(copy, nonatomic) NSNumber *similarProductStatus; // @synthesize similarProductStatus=_similarProductStatus;
@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

