//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DYTrackerShowTemplate, NSArray, NSMutableArray;

@interface DYTrackerShowCollection : NSObject
{
    NSArray *_data;
    DYTrackerShowTemplate *_trackTemplate;
    NSMutableArray *_cardExposedArray;
    long long _indexTag;
    NSMutableArray *_exposedCurrentDisplayArray;
    struct CGPoint _scrollContentOffset;
}

+ (id)parseJson:(id)arg1;
@property(nonatomic) struct CGPoint scrollContentOffset; // @synthesize scrollContentOffset=_scrollContentOffset;
@property(retain, nonatomic) NSMutableArray *exposedCurrentDisplayArray; // @synthesize exposedCurrentDisplayArray=_exposedCurrentDisplayArray;
@property(nonatomic) long long indexTag; // @synthesize indexTag=_indexTag;
@property(retain, nonatomic) NSMutableArray *cardExposedArray; // @synthesize cardExposedArray=_cardExposedArray;
@property(retain, nonatomic) DYTrackerShowTemplate *trackTemplate; // @synthesize trackTemplate=_trackTemplate;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)init;

@end

