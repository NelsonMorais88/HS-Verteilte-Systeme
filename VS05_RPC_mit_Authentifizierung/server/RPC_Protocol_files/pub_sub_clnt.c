/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "pub_sub.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

short *
set_channel_1(param *argp, CLIENT *clnt)
{
	static short clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, set_channel,
		(xdrproc_t) xdr_param, (caddr_t) argp,
		(xdrproc_t) xdr_short, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

short *
subscribe_1(param *argp, CLIENT *clnt)
{
	static short clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, subscribe,
		(xdrproc_t) xdr_param, (caddr_t) argp,
		(xdrproc_t) xdr_short, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

short *
unsubscribe_1(param *argp, CLIENT *clnt)
{
	static short clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, unsubscribe,
		(xdrproc_t) xdr_param, (caddr_t) argp,
		(xdrproc_t) xdr_short, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

short *
publish_1(param *argp, CLIENT *clnt)
{
	static short clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, publish,
		(xdrproc_t) xdr_param, (caddr_t) argp,
		(xdrproc_t) xdr_short, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

sessionid *
get_session_1(user *argp, CLIENT *clnt)
{
	static sessionid clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, get_session,
		(xdrproc_t) xdr_user, (caddr_t) argp,
		(xdrproc_t) xdr_sessionid, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

short *
validate_1(param *argp, CLIENT *clnt)
{
	static short clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, validate,
		(xdrproc_t) xdr_param, (caddr_t) argp,
		(xdrproc_t) xdr_short, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

short *
invalidate_1(sessionid *argp, CLIENT *clnt)
{
	static short clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, invalidate,
		(xdrproc_t) xdr_sessionid, (caddr_t) argp,
		(xdrproc_t) xdr_short, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
