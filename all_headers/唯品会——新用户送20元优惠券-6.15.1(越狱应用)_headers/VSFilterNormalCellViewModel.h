//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VSFilterNormalCellViewModel : NSObject
{
    _Bool _chosen;
    _Bool _singleChoice;
    NSString *_keyId;
    NSString *_title;
    id _model;
}

@property(copy, nonatomic) id model; // @synthesize model=_model;
@property(nonatomic) _Bool singleChoice; // @synthesize singleChoice=_singleChoice;
@property(nonatomic) _Bool chosen; // @synthesize chosen=_chosen;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *keyId; // @synthesize keyId=_keyId;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isMoreBrand;

@end

