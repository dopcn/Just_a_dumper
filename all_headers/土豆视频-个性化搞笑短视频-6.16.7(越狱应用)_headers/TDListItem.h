//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import "VideoDelegate-Protocol.h"

@class NSNumber, NSString, UIImage;

@interface TDListItem : NSManagedObject <VideoDelegate>
{
}


// Remaining properties
@property(nonatomic) int bindViewState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *duration;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSNumber *progress;
@property(retain, nonatomic) NSNumber *rating;
@property(copy, nonatomic) NSString *recordId;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *thumb;
@property(retain, nonatomic) UIImage *thumbImage;
@property(retain, nonatomic) UIImage *thumbImageHD;
@property(copy, nonatomic) NSString *title;
@end

