//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;
@protocol ISegmentCategoryDataProvider;

@interface SegmentCategoryDataProvider : NSObject
{
    id <ISegmentCategoryDataProvider> _delegate;
    NSArray *_subSegmentInfos;
}

@property(retain, nonatomic) NSArray *subSegmentInfos; // @synthesize subSegmentInfos=_subSegmentInfos;
@property(nonatomic) __weak id <ISegmentCategoryDataProvider> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)segmentViewInfoWithSegmentKey:(id)arg1;

@end

