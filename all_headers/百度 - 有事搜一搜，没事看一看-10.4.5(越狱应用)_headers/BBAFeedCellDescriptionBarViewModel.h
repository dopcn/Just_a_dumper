//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface BBAFeedCellDescriptionBarViewModel : NSObject
{
    NSString *_userName;
    NSString *_descriptionString;
    unsigned long long _descriptionBarType;
    NSMutableDictionary *_layoutInfoMutDic;
}

@property(retain, nonatomic) NSMutableDictionary *layoutInfoMutDic; // @synthesize layoutInfoMutDic=_layoutInfoMutDic;
@property(nonatomic) unsigned long long descriptionBarType; // @synthesize descriptionBarType=_descriptionBarType;
@property(copy, nonatomic) NSString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;
- (id)init;

@end

