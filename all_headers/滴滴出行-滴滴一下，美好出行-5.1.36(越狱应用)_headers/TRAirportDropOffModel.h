//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSArray, TRAirportCIPModel;
@protocol Optional;

@interface TRAirportDropOffModel : TRBaseModel
{
    TRAirportCIPModel<Optional> *_cip;
    NSArray<Optional> *_text;
}

@property(copy, nonatomic) NSArray<Optional> *text; // @synthesize text=_text;
@property(copy, nonatomic) TRAirportCIPModel<Optional> *cip; // @synthesize cip=_cip;
- (void).cxx_destruct;

@end

