//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;
@protocol Optional;

@interface VSSwitchStatus : JSONModel
{
    NSString<Optional> *_selectSwitchStatus;
    NSString<Optional> *_foldSwitchStatus;
}

@property(copy, nonatomic) NSString<Optional> *foldSwitchStatus; // @synthesize foldSwitchStatus=_foldSwitchStatus;
@property(copy, nonatomic) NSString<Optional> *selectSwitchStatus; // @synthesize selectSwitchStatus=_selectSwitchStatus;
- (void).cxx_destruct;

@end

