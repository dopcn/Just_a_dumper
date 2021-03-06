//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HXVViewModelProtocol-Protocol.h"

@class NSString;

@interface HXVMessageItemViewModel : NSObject <HXVViewModelProtocol>
{
    int _status;
    NSString *_pubTime;
    NSString *_content;
}

+ (id)modelCustomPropertyMapper;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *pubTime; // @synthesize pubTime=_pubTime;
@property(nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (double)hxv_viewHeight;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

