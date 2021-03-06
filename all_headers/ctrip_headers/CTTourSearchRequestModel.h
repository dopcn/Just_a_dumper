//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTTourBaseModel.h"

@class CTTourSearchPosition, CTTourSearchRequestClient, CTTourSearchRequestFilters, CTTourSearchRequestReturn, NSString;

@interface CTTourSearchRequestModel : CTTourBaseModel
{
    CTTourSearchRequestClient *_client;
    CTTourSearchPosition *_poiType;
    CTTourSearchRequestFilters *_filtered;
    CTTourSearchRequestReturn *_returnType;
    NSString *_version;
}

@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) CTTourSearchRequestReturn *returnType; // @synthesize returnType=_returnType;
@property(retain, nonatomic) CTTourSearchRequestFilters *filtered; // @synthesize filtered=_filtered;
@property(retain, nonatomic) CTTourSearchPosition *poiType; // @synthesize poiType=_poiType;
@property(retain, nonatomic) CTTourSearchRequestClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (id)init;

@end

