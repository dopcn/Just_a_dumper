//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMDomain.h"

@class NSString;

@interface FMWatchAttachInfo : FMDomain
{
    int _viewType;
    NSString *_name;
    long long _attachId;
}

+ (id)watchAttachInfoWithFMAttachInfo:(id)arg1;
@property(nonatomic) long long attachId; // @synthesize attachId=_attachId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int viewType; // @synthesize viewType=_viewType;
- (void).cxx_destruct;

@end

