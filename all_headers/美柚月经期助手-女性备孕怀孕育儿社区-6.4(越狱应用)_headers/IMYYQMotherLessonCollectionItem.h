//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IMYYQMotherLessonImageBaseItem-Protocol.h"

@class NSArray, NSString;

@interface IMYYQMotherLessonCollectionItem : NSObject <IMYYQMotherLessonImageBaseItem>
{
    double cellHeight;
    NSArray *_array;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *array; // @synthesize array=_array;
@property(nonatomic) double cellHeight; // @synthesize cellHeight;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

