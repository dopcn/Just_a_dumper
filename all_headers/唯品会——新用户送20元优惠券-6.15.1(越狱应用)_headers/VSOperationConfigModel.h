//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSString, VSSearchLocationModel;
@protocol Optional, VSSearchBannersModel><Optional;

@interface VSOperationConfigModel : JSONModel
{
    NSString<Optional> *_forwardUrl;
    NSArray<VSSearchBannersModel><Optional> *_banners;
    VSSearchLocationModel<Optional> *_location;
}

@property(retain, nonatomic) VSSearchLocationModel<Optional> *location; // @synthesize location=_location;
@property(retain, nonatomic) NSArray<VSSearchBannersModel><Optional> *banners; // @synthesize banners=_banners;
@property(copy, nonatomic) NSString<Optional> *forwardUrl; // @synthesize forwardUrl=_forwardUrl;
- (void).cxx_destruct;

@end

