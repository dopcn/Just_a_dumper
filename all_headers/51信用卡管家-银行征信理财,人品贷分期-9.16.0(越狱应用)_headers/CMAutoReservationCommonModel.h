//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface CMAutoReservationCommonModel : NSObject
{
    NSMutableArray *_list;
    NSArray *_desList;
    long long _defaultValueIndex;
    id _defaultValue;
}

@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) long long defaultValueIndex; // @synthesize defaultValueIndex=_defaultValueIndex;
@property(retain, nonatomic) NSArray *desList; // @synthesize desList=_desList;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
- (void).cxx_destruct;
- (id)init;

@end

