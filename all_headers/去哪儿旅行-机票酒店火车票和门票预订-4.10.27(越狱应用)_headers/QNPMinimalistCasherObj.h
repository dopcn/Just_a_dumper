//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, QNPMinimalistCasherItem;

@interface QNPMinimalistCasherObj : NSObject
{
    NSMutableArray *_casherItemList;
    QNPMinimalistCasherItem *_currentItem;
    NSString *_currentPayType;
    long long _commonIndex;
}

@property(nonatomic, getter=commonIndex) long long commonIndex; // @synthesize commonIndex=_commonIndex;
@property(retain, nonatomic) NSString *currentPayType; // @synthesize currentPayType=_currentPayType;
@property(retain, nonatomic) QNPMinimalistCasherItem *currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) NSMutableArray *casherItemList; // @synthesize casherItemList=_casherItemList;
- (void).cxx_destruct;

@end

