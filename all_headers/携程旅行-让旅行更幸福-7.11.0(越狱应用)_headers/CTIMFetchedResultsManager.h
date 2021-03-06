//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CTFetchedResults, NSArray, NSString;
@protocol CTIMFetchedResultsManagerDelegate;

@interface CTIMFetchedResultsManager : NSObject
{
    NSArray *_oldObjects;
    NSArray *_oldIndexPaths;
    id <CTIMFetchedResultsManagerDelegate> _delegate;
    CTFetchedResults *_results;
    NSString *_title;
}

@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) CTFetchedResults *results; // @synthesize results=_results;
@property(nonatomic) __weak id <CTIMFetchedResultsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notifyEndChanges;
- (void)notifyChangedObjects:(id)arg1 atIndexPaths:(id)arg2 forChangeType:(unsigned long long)arg3 newIndexPaths:(id)arg4;
- (void)notifyBeginChanges;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)indexPathForObject:(id)arg1;
- (id)objectAtIndexPath:(id)arg1;
- (id)indexPathForLastObject;
- (void)dealloc;
- (id)initWithFetchedResultsWithDelegate:(id)arg1;
- (id)initWithResults:(id)arg1 title:(id)arg2 delegate:(id)arg3;
- (id)initWithResults:(id)arg1 title:(id)arg2;

@end

