//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class HTSVideoNetMusicCollectionAppendableViewModel, NSNumber;
@protocol HTSVideoNetMusicCollectionViewModel;

@interface HTSVideoNetMusicCollectionInteractor : NSObject
{
    HTSVideoNetMusicCollectionAppendableViewModel *_viewModel;
    NSNumber *_cursor;
    NSNumber *_count;
}

@property(copy, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(copy, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) id <HTSVideoNetMusicCollectionViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)loadWithCursor:(id)arg1 count:(id)arg2;
- (void)reload;
- (CDUnknownBlockType)loadMore;
- (id)init;

@end

