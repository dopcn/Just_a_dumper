//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VIMModelObject.h"

@class NSString;

@interface VIMAppeal : VIMModelObject
{
    NSString *_link;
    long long _copyrightMatchStatus;
    NSString *_status;
}

@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(nonatomic) long long copyrightMatchStatus; // @synthesize copyrightMatchStatus=_copyrightMatchStatus;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
- (void).cxx_destruct;
- (long long)determineCopyrightMatchStatus;
- (void)didFinishMapping;

@end

