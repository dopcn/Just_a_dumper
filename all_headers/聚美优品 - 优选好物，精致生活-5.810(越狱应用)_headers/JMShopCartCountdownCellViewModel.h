//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "JMShopCartCellViewModelProtocol-Protocol.h"

@class NSString;

@interface JMShopCartCountdownCellViewModel : NSObject <JMShopCartCellViewModelProtocol>
{
    unsigned long long _cellType;
    CDUnknownBlockType _cellDidSelectBlock;
}

+ (id)cellViewModel;
@property(copy, nonatomic) CDUnknownBlockType cellDidSelectBlock; // @synthesize cellDidSelectBlock=_cellDidSelectBlock;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;
- (id)reuseIdentifier;
- (Class)cellClass;

// Remaining properties
@property(retain, nonatomic) NSString *currentTime;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

