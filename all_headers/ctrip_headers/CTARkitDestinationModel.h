//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTJSONModel.h"

@class NSString;

@interface CTARkitDestinationModel : CTJSONModel
{
    long long _destination_ID;
    NSString *_ar_Model;
    NSString *_vr_Picture;
    NSString *_vr_Video;
    NSString *_dest_Explorer_icon;
    NSString *_dest_Explorer_JumpTo;
}

@property(copy, nonatomic) NSString *dest_Explorer_JumpTo; // @synthesize dest_Explorer_JumpTo=_dest_Explorer_JumpTo;
@property(copy, nonatomic) NSString *dest_Explorer_icon; // @synthesize dest_Explorer_icon=_dest_Explorer_icon;
@property(copy, nonatomic) NSString *vr_Video; // @synthesize vr_Video=_vr_Video;
@property(copy, nonatomic) NSString *vr_Picture; // @synthesize vr_Picture=_vr_Picture;
@property(copy, nonatomic) NSString *ar_Model; // @synthesize ar_Model=_ar_Model;
@property(nonatomic) long long destination_ID; // @synthesize destination_ID=_destination_ID;
- (void).cxx_destruct;

@end

