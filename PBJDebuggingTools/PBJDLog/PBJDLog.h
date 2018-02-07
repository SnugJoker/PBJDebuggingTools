//
//  PBJDLog.h
//  MishlochimNative
//
//  Created by Joseph Razon on 11/08/2016.
//  Copyright © 2016 zap. All rights reserved.
//


#ifndef PBJDLog_h
#define PBJDLog_h


#ifdef DEBUG

#define DLog(...) NSLog(@"%s [Line %d]: %@", __PRETTY_FUNCTION__, __LINE__, [NSString stringWithFormat:__VA_ARGS__])

#else

#define DLog(...)

#endif

#define ALog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);

#ifdef DEBUG

#define ULog(fmt, ...)  { UIAlertView *alertLog = [[UIAlertView alloc] initWithTitle:[NSString stringWithFormat:@"%s\n [Line %d] ", __PRETTY_FUNCTION__, __LINE__] message:[NSString stringWithFormat:fmt, ##__VA_ARGS__]  delegate:nil cancelButtonTitle:@"Ok" otherButtonTitles:nil]; [alertLog show]; }

#else

#define ULog(...)

#endif


#endif
