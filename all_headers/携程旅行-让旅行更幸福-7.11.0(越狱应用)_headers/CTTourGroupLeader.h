//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTTourBaseModel.h"

@class NSString;

@interface CTTourGroupLeader : CTTourBaseModel
{
    _Bool _isLeader;
    NSString *_leadId;
    NSString *_imageId;
}

+ (id)modelCustomPropertyMapper;
@property(retain) NSString *imageId; // @synthesize imageId=_imageId;
@property(retain) NSString *leadId; // @synthesize leadId=_leadId;
@property _Bool isLeader; // @synthesize isLeader=_isLeader;
- (void).cxx_destruct;

@end

