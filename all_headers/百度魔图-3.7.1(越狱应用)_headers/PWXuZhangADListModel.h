//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface PWXuZhangADListModel : JSONModel
{
    float _start_time;
    float _end_time;
    NSString *_adpv_url;
    NSString *_ad_html;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSString *ad_html; // @synthesize ad_html=_ad_html;
@property(retain, nonatomic) NSString *adpv_url; // @synthesize adpv_url=_adpv_url;
@property(nonatomic) float end_time; // @synthesize end_time=_end_time;
@property(nonatomic) float start_time; // @synthesize start_time=_start_time;
- (void).cxx_destruct;

@end

