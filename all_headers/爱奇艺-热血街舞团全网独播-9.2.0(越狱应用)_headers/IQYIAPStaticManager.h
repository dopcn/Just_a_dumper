//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DataLoadManager.h"

@class NSString;

@interface IQYIAPStaticManager : DataLoadManager
{
    NSString *_pu;
    NSString *_step;
    NSString *_bzid;
    NSString *_tradeid;
    NSString *_origid;
    NSString *_fail_type;
    NSString *_res_code;
    NSString *_res_status;
    NSString *_p_id;
}

@property(copy, nonatomic) NSString *p_id; // @synthesize p_id=_p_id;
@property(copy, nonatomic) NSString *res_status; // @synthesize res_status=_res_status;
@property(copy, nonatomic) NSString *res_code; // @synthesize res_code=_res_code;
@property(copy, nonatomic) NSString *fail_type; // @synthesize fail_type=_fail_type;
@property(copy, nonatomic) NSString *origid; // @synthesize origid=_origid;
@property(copy, nonatomic) NSString *tradeid; // @synthesize tradeid=_tradeid;
@property(copy, nonatomic) NSString *bzid; // @synthesize bzid=_bzid;
@property(copy, nonatomic) NSString *step; // @synthesize step=_step;
@property(copy, nonatomic) NSString *pu; // @synthesize pu=_pu;
- (void).cxx_destruct;
- (_Bool)parse:(id)arg1;
- (id)urlStl;
- (id)init;

@end

