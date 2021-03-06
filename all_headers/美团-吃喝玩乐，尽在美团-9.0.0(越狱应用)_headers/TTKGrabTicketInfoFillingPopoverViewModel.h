//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SAKFetchedResultsController, TTKGTInfoFillingPopoverViewHeaderCellItem, TTKGTInfoFillingPopoverViewTipsCellItem;

@interface TTKGrabTicketInfoFillingPopoverViewModel : NSObject
{
    TTKGTInfoFillingPopoverViewHeaderCellItem *_headerCellItem;
    SAKFetchedResultsController *_resultsController;
    CDUnknownBlockType _didResetSelection;
    CDUnknownBlockType _didConfirmSelection;
    NSArray *_dataSource;
    NSString *_tips;
    NSArray *_selectedSource;
    TTKGTInfoFillingPopoverViewTipsCellItem *_tipsCellItem;
    NSArray *_contentItemArray;
    long long _selectedCount;
    NSString *_mgetype;
}

@property(copy, nonatomic) NSString *mgetype; // @synthesize mgetype=_mgetype;
@property(nonatomic) long long selectedCount; // @synthesize selectedCount=_selectedCount;
@property(copy, nonatomic) NSArray *contentItemArray; // @synthesize contentItemArray=_contentItemArray;
@property(retain, nonatomic) TTKGTInfoFillingPopoverViewTipsCellItem *tipsCellItem; // @synthesize tipsCellItem=_tipsCellItem;
@property(copy, nonatomic) NSArray *selectedSource; // @synthesize selectedSource=_selectedSource;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(copy, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) CDUnknownBlockType didConfirmSelection; // @synthesize didConfirmSelection=_didConfirmSelection;
@property(copy, nonatomic) CDUnknownBlockType didResetSelection; // @synthesize didResetSelection=_didResetSelection;
@property(retain, nonatomic) SAKFetchedResultsController *resultsController; // @synthesize resultsController=_resultsController;
@property(retain, nonatomic) TTKGTInfoFillingPopoverViewHeaderCellItem *headerCellItem; // @synthesize headerCellItem=_headerCellItem;
- (void).cxx_destruct;
- (id)buildContentItemArray;
- (void)buildFetchResultsController;
- (void)bindData;
- (id)initWithDataSource:(id)arg1 tipsMessage:(id)arg2 selectedSource:(id)arg3;

@end

